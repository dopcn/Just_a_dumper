//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, YXEmojiGameTextView;

@interface YXEmojiGameGradeTopView : UIView
{
    UIImageView *_gradeImageView;
    YXEmojiGameTextView *_gradeView;
    YXEmojiGameTextView *_scoreView;
}

@property(retain, nonatomic) YXEmojiGameTextView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) YXEmojiGameTextView *gradeView; // @synthesize gradeView=_gradeView;
@property(retain, nonatomic) UIImageView *gradeImageView; // @synthesize gradeImageView=_gradeImageView;
- (void).cxx_destruct;
- (void)setEmojiGameWithGradeModel:(id)arg1;
- (void)awakeFromNib;

@end

