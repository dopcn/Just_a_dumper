//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightCoordinateModel : CTBusinessBean
{
    int coordinateEType;
    NSString *latitude;
    NSString *longitude;
}

@property(copy, nonatomic) NSString *longitude; // @synthesize longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude;
@property(nonatomic) int coordinateEType; // @synthesize coordinateEType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

