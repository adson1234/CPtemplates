vector<int> p;
vector<int> depth;

void Make_Set(int x){
    p[x]=x;
    depth[x]=0;
}

int Find_Set(int x){
    if (p[x]!=x){
        p[x]=Find_Set(p[x]);
    }
    return p[x];
}

void Union_Set(int x, int y){
    x=Find_Set(x);
    y=Find_Set(y);
    if (depth[x]>depth[y]){
        p[y]=x;
    }else{
        p[x]=y;
        if (depth[x]==depth[y]) depth[y]++;
    }
}
