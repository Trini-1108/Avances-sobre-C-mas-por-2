float calcularBono(float sueldo)
{
float bono;
if(sueldo >= 2000)
{
bono = sueldo * 0.10;
}
else
{
bono = sueldo * 0.05;
}
return bono;
}
