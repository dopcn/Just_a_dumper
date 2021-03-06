//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EDDirector : NSObject
{
    double _scaleFactor;
    struct CGSize _sceneSize;
    union _GLKMatrix4 _projectionMatrix;
    union _GLKMatrix4 _modelViewMatrix;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDirector;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) union _GLKMatrix4 modelViewMatrix; // @synthesize modelViewMatrix=_modelViewMatrix;
@property(nonatomic) union _GLKMatrix4 projectionMatrix; // @synthesize projectionMatrix=_projectionMatrix;
@property(nonatomic) struct CGSize sceneSize; // @synthesize sceneSize=_sceneSize;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

