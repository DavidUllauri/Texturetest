#version 330 core
out vec4 FragColor;
			
in vec2 TexCoord;
uniform sampler2D picture;

void main()
{
	FragColor = texture(picture, TexCoord);
	// FragColor = vec4 (1.0f, 0.0f, 0.0f, 1.0f);
}