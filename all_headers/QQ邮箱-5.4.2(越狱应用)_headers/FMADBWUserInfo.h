//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FMADBWUserInfo : NSObject
{
    long long _uin;
    NSString *_email;
    long long _type;
    long long _func;
}

@property(nonatomic) long long func; // @synthesize func=_func;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;

@end

