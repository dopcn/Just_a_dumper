//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTGoogleMapAnotation, CTHotelMapAnnotationV2, NSDictionary, NSString;

@interface CTHotelHybridMapAnnotation : NSObject
{
    _Bool _isCityCenter;
    _Bool _isScaleLatLong;
    _Bool _isFirstView;
    NSString *_identifier;
    NSString *_title;
    NSString *_htmlTitle;
    NSString *_htmlSubTitle;
    NSString *_xibName4Native;
    NSString *_iconImage4Native;
    NSDictionary *_information;
    NSString *_leftAccessoryImageName;
    NSString *_iconType4Google;
    NSString *_selectedIconPath4Google;
    NSString *_contentJSString;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) _Bool isFirstView; // @synthesize isFirstView=_isFirstView;
@property(nonatomic) _Bool isScaleLatLong; // @synthesize isScaleLatLong=_isScaleLatLong;
@property(nonatomic) _Bool isCityCenter; // @synthesize isCityCenter=_isCityCenter;
@property(copy, nonatomic) NSString *contentJSString; // @synthesize contentJSString=_contentJSString;
@property(copy, nonatomic) NSString *selectedIconPath4Google; // @synthesize selectedIconPath4Google=_selectedIconPath4Google;
@property(copy, nonatomic) NSString *iconType4Google; // @synthesize iconType4Google=_iconType4Google;
@property(copy, nonatomic) NSString *leftAccessoryImageName; // @synthesize leftAccessoryImageName=_leftAccessoryImageName;
@property(retain, nonatomic) NSDictionary *information; // @synthesize information=_information;
@property(copy, nonatomic) NSString *iconImage4Native; // @synthesize iconImage4Native=_iconImage4Native;
@property(copy, nonatomic) NSString *xibName4Native; // @synthesize xibName4Native=_xibName4Native;
@property(copy, nonatomic) NSString *htmlSubTitle; // @synthesize htmlSubTitle=_htmlSubTitle;
@property(copy, nonatomic) NSString *htmlTitle; // @synthesize htmlTitle=_htmlTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) CTGoogleMapAnotation *googleMapAnnotation;
@property(readonly, nonatomic) CTHotelMapAnnotationV2 *zoomAnnotation;

@end

