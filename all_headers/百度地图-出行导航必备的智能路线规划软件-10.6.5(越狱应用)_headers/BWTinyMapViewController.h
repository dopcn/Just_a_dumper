//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BWTinyMapView;

@interface BWTinyMapViewController : NSObject
{
    BWTinyMapView *_tinyMapView;
}

+ (id)sharedInstance;
+ (_Bool)alreadyInstance;
@property(retain, nonatomic) BWTinyMapView *tinyMapView; // @synthesize tinyMapView=_tinyMapView;
- (void).cxx_destruct;
- (struct BMMapStatus)getMapStatus;
- (void)setMapStatus:(struct BMMapStatus)arg1;
- (void)releaseTinyMapController;
- (void)setTinyInitMapStatus;
- (struct BMRect)routeRect;
- (struct IVMapbaseInterface *)getTinyCMapControl;
- (struct CGRect)getTinyMapFrame;
- (id)getTinyMapView;
- (void)initEngine;
- (id)init;

@end

