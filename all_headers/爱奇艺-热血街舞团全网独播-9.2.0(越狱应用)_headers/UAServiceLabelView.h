//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSMutableArray;

@interface UAServiceLabelView : UIView
{
    NSMutableArray *_tappableTxtObjs;
    CDUnknownBlockType _responseBlock;
    NSArray *_tappableStrings;
    NSAttributedString *_attributedText;
}

+ (id)touchableViewWithResponse:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSArray *tappableStrings; // @synthesize tappableStrings=_tappableStrings;
- (void).cxx_destruct;
- (struct CGRect)boundsWithLine:(struct __CTLine *)arg1 origin:(struct CGPoint)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end

