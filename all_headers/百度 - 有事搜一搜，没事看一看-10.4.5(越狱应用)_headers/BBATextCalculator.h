//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BBATextProcessor;

@interface BBATextCalculator : NSObject
{
    BBATextProcessor *_processor;
    CDUnknownBlockType _maxLines;
    CDUnknownBlockType _width;
    unsigned long long _lineCount;
    CDUnknownBlockType _calculate;
    CDUnknownBlockType _calculateHeight;
    CDUnknownBlockType _calculate_async;
    double _mWidth;
    unsigned long long _mMaxLines;
    struct UIEdgeInsets _padding;
}

+ (id)calculatorWithProcessor:(id)arg1;
@property(nonatomic) unsigned long long mMaxLines; // @synthesize mMaxLines=_mMaxLines;
@property(nonatomic) double mWidth; // @synthesize mWidth=_mWidth;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) CDUnknownBlockType calculate_async; // @synthesize calculate_async=_calculate_async;
@property(copy, nonatomic) CDUnknownBlockType calculateHeight; // @synthesize calculateHeight=_calculateHeight;
@property(copy, nonatomic) CDUnknownBlockType calculate; // @synthesize calculate=_calculate;
@property(nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
@property(copy, nonatomic) CDUnknownBlockType width; // @synthesize width=_width;
@property(copy, nonatomic) CDUnknownBlockType maxLines; // @synthesize maxLines=_maxLines;
@property(retain, nonatomic) BBATextProcessor *processor; // @synthesize processor=_processor;
- (void).cxx_destruct;
- (double)calculateHeightPrivate;
- (id)initWithProcessor:(id)arg1;

@end

