//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LSFormTextCell, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface LSKeyboardControl : UIView
{
    UIBarButtonItem *_previousButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    LSFormTextCell *_previousCell;
    LSFormTextCell *_currentCell;
    LSFormTextCell *_nextCell;
}

@property(retain, nonatomic) LSFormTextCell *nextCell; // @synthesize nextCell=_nextCell;
@property(retain, nonatomic) LSFormTextCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) LSFormTextCell *previousCell; // @synthesize previousCell=_previousCell;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIBarButtonItem *previousButton; // @synthesize previousButton=_previousButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

