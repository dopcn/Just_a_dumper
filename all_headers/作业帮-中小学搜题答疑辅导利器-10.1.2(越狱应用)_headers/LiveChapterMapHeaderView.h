//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LiveChapterMapViewModel, LiveFormHeaderView, UIImageView, UILabel, UIScrollView, ZDCourseStudentGetlearnlessoninfo;

@interface LiveChapterMapHeaderView : UIView
{
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _tapHomework;
    UILabel *_chapterLabel;
    UILabel *_descripLabel;
    LiveFormHeaderView *_formView;
    UIImageView *_medalImage;
    ZDCourseStudentGetlearnlessoninfo *_lessonInfo;
    LiveChapterMapViewModel *_viewModel;
    UIScrollView *_scrollView;
    UILabel *_homeworkLabel;
}

+ (double)heightOfHeaderWithItem:(id)arg1;
@property(retain, nonatomic) UILabel *homeworkLabel; // @synthesize homeworkLabel=_homeworkLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak LiveChapterMapViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) ZDCourseStudentGetlearnlessoninfo *lessonInfo; // @synthesize lessonInfo=_lessonInfo;
@property(retain, nonatomic) UIImageView *medalImage; // @synthesize medalImage=_medalImage;
@property(retain, nonatomic) LiveFormHeaderView *formView; // @synthesize formView=_formView;
@property(retain, nonatomic) UILabel *descripLabel; // @synthesize descripLabel=_descripLabel;
@property(retain, nonatomic) UILabel *chapterLabel; // @synthesize chapterLabel=_chapterLabel;
@property(copy, nonatomic) CDUnknownBlockType tapHomework; // @synthesize tapHomework=_tapHomework;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (struct CGPoint)getContentOffset;
- (void)gotoHomework;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)refreshStars;
- (unsigned long long)getCurrentIndex;
- (void)refreshWithItem:(id)arg1;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1 withItem:(id)arg2 withViewModel:(id)arg3;

@end

