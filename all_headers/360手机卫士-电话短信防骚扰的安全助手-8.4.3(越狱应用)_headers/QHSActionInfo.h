//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface QHSActionInfo : NSObject
{
    _Bool signin;
    long long ttl;
    NSString *act_desc;
    NSString *act_url;
    NSString *act_url_desc;
    long long score;
    NSDictionary *splash;
    NSArray *countdown;
    NSString *req_url;
    NSDictionary *audioConf;
    NSDictionary *shareInfo;
    NSArray *todayPrizes;
    NSDate *responseDate;
}

+ (id)instanceWithDict:(id)arg1;
@property(retain, nonatomic) NSDate *responseDate; // @synthesize responseDate;
@property(retain, nonatomic) NSArray *todayPrizes; // @synthesize todayPrizes;
@property(retain, nonatomic) NSDictionary *shareInfo; // @synthesize shareInfo;
@property(retain, nonatomic) NSDictionary *audioConf; // @synthesize audioConf;
@property(retain, nonatomic) NSString *req_url; // @synthesize req_url;
@property(retain, nonatomic) NSArray *countdown; // @synthesize countdown;
@property(retain, nonatomic) NSDictionary *splash; // @synthesize splash;
@property(nonatomic) long long score; // @synthesize score;
@property(nonatomic) _Bool signin; // @synthesize signin;
@property(retain, nonatomic) NSString *act_url_desc; // @synthesize act_url_desc;
@property(retain, nonatomic) NSString *act_url; // @synthesize act_url;
@property(retain, nonatomic) NSString *act_desc; // @synthesize act_desc;
@property(nonatomic) long long ttl; // @synthesize ttl;
- (void).cxx_destruct;
- (_Bool)isExpired;

@end

