//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMBLoginBaseService.h"

@class NSString;

@interface SNMBRipBingdingCheckRequest : SNMBLoginBaseService
{
    CDUnknownBlockType _CheckCompleteBlock;
    NSString *_token;
    NSString *_aliasName;
    NSString *_userName;
    NSString *_idNo;
}

@property(copy, nonatomic) NSString *idNo; // @synthesize idNo=_idNo;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *aliasName; // @synthesize aliasName=_aliasName;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) CDUnknownBlockType CheckCompleteBlock; // @synthesize CheckCompleteBlock=_CheckCompleteBlock;
- (void).cxx_destruct;
- (void)requestDidCompleted;
- (void)requestDidFailed;
- (id)requestArgument;
- (long long)requestMethod;
- (id)requestUrl;
- (void)checkIdentifyWithToken:(id)arg1 PhoneN:(id)arg2 name:(id)arg3 IDCard:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;

@end

