//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSString;

@interface MCEPositionModel : JSONModel
{
    NSString *_lat;
    NSString *_lng;
    NSString *_angle;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *angle; // @synthesize angle=_angle;
@property(retain, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSString *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;
- (_Bool)hasCoordinate;

@end

