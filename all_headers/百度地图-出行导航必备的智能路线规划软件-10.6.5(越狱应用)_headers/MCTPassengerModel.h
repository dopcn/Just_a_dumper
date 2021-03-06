//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSString;

@interface MCTPassengerModel : JSONModel
{
    NSString *_start_lat;
    NSString *_start_lng;
    NSString *_end_lat;
    NSString *_end_lng;
    NSString *_start_place;
    NSString *_end_place;
    NSString *_name;
}

+ (id)dummpyModel;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *end_place; // @synthesize end_place=_end_place;
@property(retain, nonatomic) NSString *start_place; // @synthesize start_place=_start_place;
@property(retain, nonatomic) NSString *end_lng; // @synthesize end_lng=_end_lng;
@property(retain, nonatomic) NSString *end_lat; // @synthesize end_lat=_end_lat;
@property(retain, nonatomic) NSString *start_lng; // @synthesize start_lng=_start_lng;
@property(retain, nonatomic) NSString *start_lat; // @synthesize start_lat=_start_lat;
- (void).cxx_destruct;
- (_Bool)passengerStartAndEndPositionAvailable;
- (_Bool)mercatorEndPointAvailable;
- (_Bool)mercatorStartPointAvailable;
- (struct BMPoint)mercatorEndPoint;
- (struct BMPoint)mercatorStartPoint;

@end

