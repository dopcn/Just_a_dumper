//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface Credit_resp : NSObject
{
    NSString *_creditCost;
    NSString *_creditExpire;
    NSString *_creditExpireSoon;
    NSString *_creditRest;
    NSString *_creditTotal;
    NSString *_expireTime;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *creditTotal; // @synthesize creditTotal=_creditTotal;
@property(retain, nonatomic) NSString *creditRest; // @synthesize creditRest=_creditRest;
@property(retain, nonatomic) NSString *creditExpireSoon; // @synthesize creditExpireSoon=_creditExpireSoon;
@property(retain, nonatomic) NSString *creditExpire; // @synthesize creditExpire=_creditExpire;
@property(retain, nonatomic) NSString *creditCost; // @synthesize creditCost=_creditCost;
- (void).cxx_destruct;
- (id)init;

@end

