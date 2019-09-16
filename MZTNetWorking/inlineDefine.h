//
//  inlineDefine.h
//  NetWorking
//
//  Created by lwj on 2018/4/25.
//  Copyright © 2018年 lwj. All rights reserved.
//

#ifndef inlineDefine_h
#define inlineDefine_h  

///正式服务器
static NSString *BaseUrl = @"https://www.geekerx.com";

static inline NSString *GetUrl(NSString *path) {
    
    return  [NSString stringWithFormat:@"%@%@",BaseUrl,path];
    
}

#endif /* inlineDefine_h */
