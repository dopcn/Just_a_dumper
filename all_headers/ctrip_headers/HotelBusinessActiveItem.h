//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelBusinessActiveItem : CTBusinessBean
{
    int _zoneId;
    NSString *_zoneName;
    NSString *_imageURL;
    NSString *_activeName;
    NSString *_hotelCount;
    NSString *_jumpURL;
}

@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *hotelCount; // @synthesize hotelCount=_hotelCount;
@property(copy, nonatomic) NSString *activeName; // @synthesize activeName=_activeName;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(nonatomic) int zoneId; // @synthesize zoneId=_zoneId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

