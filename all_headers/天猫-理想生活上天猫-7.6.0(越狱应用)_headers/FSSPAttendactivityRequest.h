//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MtopExtRequstBase.h"

@class NSString;

@interface FSSPAttendactivityRequest : MtopExtRequstBase
{
    NSString *_seller;
    NSString *_bizType;
    NSString *_bizId;
}

@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *seller; // @synthesize seller=_seller;
- (void).cxx_destruct;
- (void)sendRequest;
- (id)init;

@end

