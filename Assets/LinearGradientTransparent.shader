Shader "Custom/LinearGradientTransparent" {
    Properties{
        _Color("Color", Color) = (0,0,0,1)
        _MainTex("Texture", 2D) = "white" {}
        _AlphaScale("Alpha Scale",Range(0,1)) = 1
        _Top("Top", Range(0, 10)) = 10
        _Bottom("Bottom", Range(0, 10)) = 0
        _Right("Right", Range(0, 10)) = 10
        _Left("Left", Range(0, 10)) = 0
    }

        SubShader{
            Tags { "RenderType" = "Transparent" "Queue" = "Transparent"}
            LOD 100

            Pass {
                CGPROGRAM
                #pragma vertex vert
                #pragma fragment frag

                #include "UnityCG.cginc"

                struct appdata {
                    float4 vertex : POSITION;
                    float2 uv : TEXCOORD0;
                };

                struct v2f {
                    float2 uv : TEXCOORD0;
                    float4 vertex : SV_POSITION;
                    float3 localPos : TEXCOORD1;
                };

                sampler2D _MainTex;
                float4 _MainTex_ST;
                float4 _Color;
                float _Top;
                float _Bottom;
                float _Right;
                float _Left;

                v2f vert(appdata v) {
                    v2f o;
                    o.vertex = UnityObjectToClipPos(v.vertex);
                    o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                    o.localPos = v.vertex.xyz;
                    return o;
                }

                fixed4 frag(v2f i) : SV_Target {
                    fixed4 col = tex2D(_MainTex, i.uv) * _Color;
                    col.a *= smoothstep(_Bottom, _Top, i.localPos.y);
                    col.a *= smoothstep(_Left, _Right, i.localPos.x);
                    clip(col.a - 0.01);
                    return col;
                }
                ENDCG
            }
        }
}

