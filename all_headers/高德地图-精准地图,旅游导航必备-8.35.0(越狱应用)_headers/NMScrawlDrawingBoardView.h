//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NMScrawlCanvasViewDelegate-Protocol.h"

@class NMScrawlCanvasView, NSString, UIImageView;
@protocol NMScrawlDrawingBoardViewDelegate;

@interface NMScrawlDrawingBoardView : UIView <NMScrawlCanvasViewDelegate>
{
    id <NMScrawlDrawingBoardViewDelegate> _delegate;
    NMScrawlCanvasView *_scrawlCanvasView;
    UIImageView *_baseImageView;
}

@property(retain, nonatomic) UIImageView *baseImageView; // @synthesize baseImageView=_baseImageView;
@property(retain, nonatomic) NMScrawlCanvasView *scrawlCanvasView; // @synthesize scrawlCanvasView=_scrawlCanvasView;
@property(nonatomic) __weak id <NMScrawlDrawingBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)simulateTapView:(struct CGPoint)arg1;
- (void)forceToReDraw;
- (id)textArray;
- (void)scrawlCanvasViewEnableUndoButton:(_Bool)arg1;
- (void)scrawlCanvasViewEnableRedoButton:(_Bool)arg1;
- (void)scrawlCanvasViewClicked;
- (void)keyboardWillChangeYoffset:(float)arg1 textViewFrame:(struct CGRect)arg2 duration:(float)arg3;
- (void)clearAll;
- (void)setScrawlLineColor:(id)arg1;
- (void)setScrawlLineWidth:(float)arg1;
- (void)setScrawlDrawingType:(unsigned long long)arg1;
- (void)redoLatestStep;
- (void)undoLatestStep;
- (void)setBaseViewImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

