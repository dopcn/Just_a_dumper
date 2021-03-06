//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMIEditorHeader-Protocol.h"

@class NSString, QMEditorHeaderData, UIImageView, UILabel, UITextField;

@interface QMEditorHeader : UIView <QMIEditorHeader>
{
    UILabel *_labelTime;
    UITextField *_textTitle;
    UIImageView *_separateLine;
    QMEditorHeaderData *_data;
}

@property(readonly, nonatomic) UITextField *textTitle; // @synthesize textTitle=_textTitle;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)getFrame;
- (void)blur;
@property(readonly, nonatomic) long long initialShowHeight;
- (void)setEditorDelegate:(id)arg1;
- (void)renderWithData:(id)arg1;
- (void)layout;
- (void)initView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

