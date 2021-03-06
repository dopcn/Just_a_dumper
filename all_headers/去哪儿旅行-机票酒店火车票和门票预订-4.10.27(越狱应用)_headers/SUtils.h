//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SUtils : NSObject
{
}

+ (void)savePhoto:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)thumbnailWithImage:(id)arg1 size:(struct CGSize)arg2;
+ (id)captureImageFromView:(id)arg1 size:(struct CGSize)arg2 scale:(long long)arg3;
+ (id)captureImageFromView:(id)arg1;
+ (id)getGaussianBlurImage:(id)arg1 radius:(double)arg2;
+ (_Bool)isSingleAPP;
+ (long long)getAgeWithCard:(id)arg1;
+ (long long)elapseTimeToDate:(id)arg1;
+ (void)routeFrom:(struct CLLocationCoordinate2D)arg1 fromName:(id)arg2 to:(struct CLLocationCoordinate2D)arg3 toName:(id)arg4;
+ (void)routeFrom:(struct CLLocationCoordinate2D)arg1 fromName:(id)arg2 to:(struct CLLocationCoordinate2D)arg3 toName:(id)arg4 mapType:(unsigned long long)arg5;
+ (id)getAvailableMaps;
+ (_Bool)isEqualCoordinate2D:(struct CLLocationCoordinate2D)arg1 and:(struct CLLocationCoordinate2D)arg2;
+ (double)scaleLength:(double)arg1;
+ (_Bool)shouldHaveBlurEffect;
+ (_Bool)isTouchUrl:(id)arg1;
+ (void)openUrlOrScheme:(id)arg1 responseDelt:(id)arg2 userInfo:(id)arg3;
+ (void)openUrlOrScheme:(id)arg1;
+ (double)compatibleHei:(double)arg1;
+ (void)callNumber:(id)arg1;
+ (id)stringFromDate:(id)arg1 formatter:(id)arg2;
+ (id)stringFromDate:(id)arg1;
+ (id)getGPSTimeStamp;
+ (id)getGPSPoint;
+ (void)saveGPSPoint:(id)arg1;
+ (void)saveGPSCity:(id)arg1;
+ (id)getGPSCity;
+ (void)saveCity:(id)arg1;
+ (id)getCity;
+ (id)fetchUserDataForKey:(id)arg1;
+ (_Bool)saveUserData:(id)arg1 key:(id)arg2;
+ (id)documentPath;

@end

