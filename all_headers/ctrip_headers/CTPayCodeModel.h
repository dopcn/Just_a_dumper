//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPayCodeModel : NSObject
{
    _Bool _haveExpired;
    _Bool _willExpired;
    NSString *_payCode;
    NSString *_randomCode;
    NSString *_createTime;
    NSString *_userId;
    NSString *_codeInfo;
}

@property(nonatomic) _Bool willExpired; // @synthesize willExpired=_willExpired;
@property(nonatomic) _Bool haveExpired; // @synthesize haveExpired=_haveExpired;
@property(copy, nonatomic) NSString *codeInfo; // @synthesize codeInfo=_codeInfo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *randomCode; // @synthesize randomCode=_randomCode;
@property(copy, nonatomic) NSString *payCode; // @synthesize payCode=_payCode;
- (void).cxx_destruct;

@end

