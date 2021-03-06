//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSMutableArray, UGCTouchRect;

@interface UGCTouchLabel : UIView
{
    NSAttributedString *_text;
    double _vmargin;
    NSArray *_touchRect;
    NSMutableArray *_targetCallBacks;
    UGCTouchRect *_touchedRect;
}

+ (struct CGSize)suggestHeightWithText:(id)arg1 andWidth:(double)arg2 withVmargin:(double)arg3;
@property(nonatomic) __weak UGCTouchRect *touchedRect; // @synthesize touchedRect=_touchedRect;
@property(retain, nonatomic) NSMutableArray *targetCallBacks; // @synthesize targetCallBacks=_targetCallBacks;
@property(retain, nonatomic) NSArray *touchRect; // @synthesize touchRect=_touchRect;
@property(nonatomic) double vmargin; // @synthesize vmargin=_vmargin;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeAllCallBack;
- (void)addTouchRange:(struct _NSRange)arg1 andCallback:(CDUnknownBlockType)arg2;
- (id)getRectsOfRange:(struct _NSRange)arg1 andFrame:(struct __CTFrame *)arg2 withContext:(struct CGContext *)arg3;
- (void)generateTouchRectWithCTFrame:(struct __CTFrame *)arg1 andContext:(struct CGContext *)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)tapHappend:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

