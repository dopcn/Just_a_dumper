//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTMapUtils : NSObject
{
}

+ (void)openGoogleMaps:(struct CLLocationCoordinate2D)arg1 withTitle:(id)arg2;
+ (_Bool)supportsMKMapItem;
+ (void)openSystemMaps:(struct CLLocationCoordinate2D)arg1 withTitle:(id)arg2;
+ (void)openSystemMapRoutes:(struct CLLocationCoordinate2D)arg1 withTitle:(id)arg2;
+ (void)showSystemMap;
+ (void)showLocation:(struct CLLocationCoordinate2D)arg1 andTitle:(id)arg2;
+ (void)showRoutesToLocation:(struct CLLocationCoordinate2D)arg1 andTitle:(id)arg2 inExternalMapFromView:(id)arg3;
+ (_Bool)isGooleMapsInstalled;

@end

