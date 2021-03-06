//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTHomeLocalExtensionViewF, NSString;

@interface CTHomeLocalExtensionManager : NSObject
{
    _Bool _isSameToLastSetCity;
    _Bool _isLastRequestSuccess;
    int _secondPageCityID;
    int _secondPageCityIDType;
    int _secondPageUserCityID;
    CTHomeLocalExtensionViewF *_localExtensionViewF;
    NSString *_secondPageCityName;
    struct CLLocationCoordinate2D _secondPageUserCoordinate;
}

+ (id)shareInstance;
@property(nonatomic) int secondPageUserCityID; // @synthesize secondPageUserCityID=_secondPageUserCityID;
@property(nonatomic) struct CLLocationCoordinate2D secondPageUserCoordinate; // @synthesize secondPageUserCoordinate=_secondPageUserCoordinate;
@property(nonatomic) _Bool isLastRequestSuccess; // @synthesize isLastRequestSuccess=_isLastRequestSuccess;
@property(copy, nonatomic) NSString *secondPageCityName; // @synthesize secondPageCityName=_secondPageCityName;
@property(nonatomic) int secondPageCityIDType; // @synthesize secondPageCityIDType=_secondPageCityIDType;
@property(nonatomic) int secondPageCityID; // @synthesize secondPageCityID=_secondPageCityID;
@property(nonatomic) _Bool isSameToLastSetCity; // @synthesize isSameToLastSetCity=_isSameToLastSetCity;
@property(retain, nonatomic) CTHomeLocalExtensionViewF *localExtensionViewF; // @synthesize localExtensionViewF=_localExtensionViewF;
- (void).cxx_destruct;
- (_Bool)ifLocationPermissionAllow;
- (id)getNeededCityInformationFromPublicArea;
- (void)handleSetCity;
- (void)addSetCityObserver;
- (void)dealloc;
- (id)getLocationForLocal;

@end

