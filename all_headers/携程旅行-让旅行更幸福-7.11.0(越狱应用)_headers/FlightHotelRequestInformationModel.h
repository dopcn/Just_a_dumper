//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface FlightHotelRequestInformationModel : CTBusinessBean
{
    long long hotelID;
    NSMutableArray *roomIDsList;
}

@property(retain, nonatomic) NSMutableArray *roomIDsList; // @synthesize roomIDsList;
@property(nonatomic) long long hotelID; // @synthesize hotelID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

