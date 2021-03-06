//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIBezierPath, UIColor;

@interface LineGraphModel : NSObject
{
    _Bool _hasView;
    UIColor *_lineColor;
    UIColor *_pointColor;
    NSArray *_imageModels;
    NSArray *_textModels;
    UIBezierPath *_bezierPath;
    UIBezierPath *_linePath;
}

@property(retain, nonatomic) UIBezierPath *linePath; // @synthesize linePath=_linePath;
@property(retain, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property(copy, nonatomic) NSArray *textModels; // @synthesize textModels=_textModels;
@property(nonatomic) _Bool hasView; // @synthesize hasView=_hasView;
@property(copy, nonatomic) NSArray *imageModels; // @synthesize imageModels=_imageModels;
@property(copy, nonatomic) UIColor *pointColor; // @synthesize pointColor=_pointColor;
@property(copy, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void).cxx_destruct;
- (void)addLinePath:(id)arg1;
- (void)addPath:(id)arg1;
- (id)init;

@end

