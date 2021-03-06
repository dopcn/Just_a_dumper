//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMAOSIndoorLayerCprItem : NSObject
{
    NSString *_cprID;
    NSString *_name;
    NSString *_address;
    NSString *_shortname;
    double _longitude;
    double _latitude;
    NSString *_type;
    NSString *_srctype;
    NSString *_cpdata;
    NSString *_citycode;
    NSString *_group_flag;
    NSString *_discount_flag;
    NSString *_hotel_flag;
    NSString *_diner_flag;
    NSString *_recommend_flag;
    NSString *_averagecost;
    double _rating;
    struct ANPoint _g20Location;
}

@property(nonatomic) struct ANPoint g20Location; // @synthesize g20Location=_g20Location;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSString *averagecost; // @synthesize averagecost=_averagecost;
@property(retain, nonatomic) NSString *recommend_flag; // @synthesize recommend_flag=_recommend_flag;
@property(retain, nonatomic) NSString *diner_flag; // @synthesize diner_flag=_diner_flag;
@property(retain, nonatomic) NSString *hotel_flag; // @synthesize hotel_flag=_hotel_flag;
@property(retain, nonatomic) NSString *discount_flag; // @synthesize discount_flag=_discount_flag;
@property(retain, nonatomic) NSString *group_flag; // @synthesize group_flag=_group_flag;
@property(retain, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(retain, nonatomic) NSString *cpdata; // @synthesize cpdata=_cpdata;
@property(retain, nonatomic) NSString *srctype; // @synthesize srctype=_srctype;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *shortname; // @synthesize shortname=_shortname;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *cprID; // @synthesize cprID=_cprID;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

