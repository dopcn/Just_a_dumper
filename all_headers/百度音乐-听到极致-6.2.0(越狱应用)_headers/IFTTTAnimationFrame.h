//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IFTTTTransform3D, UIColor;

@interface IFTTTAnimationFrame : NSObject
{
    _Bool _hidden;
    double _alpha;
    UIColor *_color;
    double _angle;
    IFTTTTransform3D *_transform;
    double _scale;
    double _constraintConstant;
    struct CGRect _frame;
}

@property(nonatomic) double constraintConstant; // @synthesize constraintConstant=_constraintConstant;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) IFTTTTransform3D *transform; // @synthesize transform=_transform;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;

@end

