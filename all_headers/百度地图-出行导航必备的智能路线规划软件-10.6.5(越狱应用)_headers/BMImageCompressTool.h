//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BMImageCompressTool : NSObject
{
}

+ (id)compressImageImpl:(id)arg1 isEncodeUrl:(_Bool)arg2 width:(long long)arg3 height:(long long)arg4 quality:(int)arg5 align:(id)arg6;
+ (id)compressImage:(id)arg1 isEncodeUrl:(_Bool)arg2 width:(long long)arg3 height:(long long)arg4 quality:(int)arg5;
+ (id)compressImage:(id)arg1 isEncodeUrl:(_Bool)arg2 quality:(int)arg3;
+ (id)convertImageHTTPURLToHTTPS:(id)arg1 isEncodeUrl:(_Bool)arg2;
+ (id)convertImageHTTPURLToHTTPS:(id)arg1;
+ (_Bool)urlIsHttps:(id)arg1;

@end

