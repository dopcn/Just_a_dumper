//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSOWiredProjectionInkGestureRecognizer.h"

@protocol KSOPDFPanCanvasGestureRecognizerDelegate;

@interface KSOPDFPanCanvasGestureRecognizer : KSOWiredProjectionInkGestureRecognizer
{
    _Bool _isPencil;
    _Bool _isAccept;
    _Bool _isSupportClickOnhand;
    id <KSOPDFPanCanvasGestureRecognizerDelegate> _panDelegate;
}

@property(nonatomic) _Bool isSupportClickOnhand; // @synthesize isSupportClickOnhand=_isSupportClickOnhand;
@property(nonatomic) _Bool isAccept; // @synthesize isAccept=_isAccept;
@property(nonatomic) __weak id <KSOPDFPanCanvasGestureRecognizerDelegate> panDelegate; // @synthesize panDelegate=_panDelegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) long long state;

@end

