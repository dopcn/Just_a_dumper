//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightMemberInterestInformationModel : CTBusinessBean
{
    NSString *name;
    NSMutableArray *memberIDCardInfoSaveList;
    NSString *contactPhone;
    NSString *countryCode;
    long long flag;
}

@property(nonatomic) long long flag; // @synthesize flag;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone;
@property(retain, nonatomic) NSMutableArray *memberIDCardInfoSaveList; // @synthesize memberIDCardInfoSaveList;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

