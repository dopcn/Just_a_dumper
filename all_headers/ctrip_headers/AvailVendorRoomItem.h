//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface AvailVendorRoomItem : CTBusinessBean
{
    int _roomId;
    NSString *_ratePlanId;
}

@property(copy, nonatomic) NSString *ratePlanId; // @synthesize ratePlanId=_ratePlanId;
@property(nonatomic) int roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

