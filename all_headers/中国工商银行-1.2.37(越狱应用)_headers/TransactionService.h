//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TransactionService : NSObject
{
}

+ (_Bool)isWapServer:(id)arg1;
+ (void)startWebViewRequest:(id)arg1 httpConfig:(id)arg2;
+ (id)paramToBody:(id)arg1 httpConfige:(id)arg2;
+ (id)addLoginedParam:(id)arg1 httpConfige:(id)arg2;
+ (id)mergeParamFromUserinfo:(id)arg1 httpConfige:(id)arg2;
+ (void)HttpNoSessionWebview:(id)arg1 httpConfige:(id)arg2;
+ (void)HttpNoSessionWebview:(id)arg1 delegate:(id)arg2 callBack:(SEL)arg3 httpConfige:(id)arg4;
+ (void)HttpNoSessionRequest:(id)arg1 delegate:(id)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4 httpConfige:(id)arg5;
+ (void)HttpSessionWebview:(id)arg1 httpConfige:(id)arg2;
+ (void)HttpSessionWebview:(id)arg1 delegate:(id)arg2 callBack:(SEL)arg3 httpConfige:(id)arg4;
+ (void)HttpSessionRequest:(id)arg1 delegate:(id)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4 httpConfige:(id)arg5;
+ (id)UrlRequestWithBS;
+ (id)UrlRequestWithCS;
+ (void)EBDPRequest:(id)arg1 delegate:(id)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4 httpConfige:(id)arg5;
+ (void)TokenRequestWithParams:(id)arg1 delegate:(id)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4 loginedSameProcess:(_Bool)arg5 httpConfige:(id)arg6;
+ (void)HttpWebviewTransRequest:(id)arg1 httpConfige:(id)arg2;
+ (void)HttpTransRequest:(id)arg1 delegate:(id)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4 httpConfige:(id)arg5;

@end

