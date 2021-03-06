//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, JDImageView, NSArray, NewProductModel;

@interface PD3DDisplayViewModel : NSObject
{
    JDImageView *_displayView;
    NewProductModel *_model;
    NSArray *_imageArray;
    CMMotionManager *_motionManager;
    double _radianPerImage;
    long long _indexDisplaying;
    JDImageView *_lastDisplayView;
    long long _mtaIndex;
}

@property(nonatomic) long long mtaIndex; // @synthesize mtaIndex=_mtaIndex;
@property(retain, nonatomic) JDImageView *lastDisplayView; // @synthesize lastDisplayView=_lastDisplayView;
@property(nonatomic) long long indexDisplaying; // @synthesize indexDisplaying=_indexDisplaying;
@property(nonatomic) double radianPerImage; // @synthesize radianPerImage=_radianPerImage;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(retain, nonatomic) JDImageView *displayView; // @synthesize displayView=_displayView;
- (_Bool)isDeviceMotionAvailable;
- (void)selectLastDisplayView;
- (void)restartDeviceMotionUpdate;
- (void)stopDeviceMotionUpdate;
- (void)configImageArray:(id)arg1;
- (void)dealloc;

@end

