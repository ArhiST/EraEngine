struct ps_input
{
	float3 color : COLOR0;
};

float4 main(ps_input IN) : SV_TARGET
{
	return float4(IN.color, 1.f);
}
