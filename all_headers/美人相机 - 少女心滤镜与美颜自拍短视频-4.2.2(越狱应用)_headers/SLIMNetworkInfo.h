//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SLIMNetworkInfo : NSObject
{
    struct __SCNetworkReachability *_reachability;
    NSString *_status;
}

+ (id)shareInstance;
+ (void)load;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithHost:(id)arg1;

@end

