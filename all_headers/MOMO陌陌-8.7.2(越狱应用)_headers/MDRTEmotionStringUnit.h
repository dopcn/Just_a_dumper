//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableAttributedString;

@interface MDRTEmotionStringUnit : NSObject
{
    NSMutableAttributedString *_attributeString;
    NSMutableArray *_emotionImages;
    double _boundingHeight;
}

@property(nonatomic) double boundingHeight; // @synthesize boundingHeight=_boundingHeight;
@property(retain, nonatomic) NSMutableArray *emotionImages; // @synthesize emotionImages=_emotionImages;
@property(retain, nonatomic) NSMutableAttributedString *attributeString; // @synthesize attributeString=_attributeString;
- (void)dealloc;

@end

