//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface BDWalletChannelQuota : NSObject <NSCopying>
{
    NSString *_single_limit;
    NSString *_day_limit;
    NSString *_month_limit;
    NSString *_show_msg;
}

@property(retain, nonatomic) NSString *show_msg; // @synthesize show_msg=_show_msg;
@property(retain, nonatomic) NSString *month_limit; // @synthesize month_limit=_month_limit;
@property(retain, nonatomic) NSString *day_limit; // @synthesize day_limit=_day_limit;
@property(retain, nonatomic) NSString *single_limit; // @synthesize single_limit=_single_limit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

