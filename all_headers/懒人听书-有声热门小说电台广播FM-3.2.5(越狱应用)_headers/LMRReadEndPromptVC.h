//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMRReadPageVC.h"

@class LMRReaderPromptCell;
@protocol LMRReaderPromptCellDelegate;

@interface LMRReadEndPromptVC : LMRReadPageVC
{
    LMRReaderPromptCell *_promptView;
    id <LMRReaderPromptCellDelegate> _promptDelegate;
}

@property(nonatomic) __weak id <LMRReaderPromptCellDelegate> promptDelegate; // @synthesize promptDelegate=_promptDelegate;
@property(retain, nonatomic) LMRReaderPromptCell *promptView; // @synthesize promptView=_promptView;
- (void).cxx_destruct;
- (void)setupAppearance;
- (void)setupData:(id)arg1;
- (void)viewDidLoad;

@end

