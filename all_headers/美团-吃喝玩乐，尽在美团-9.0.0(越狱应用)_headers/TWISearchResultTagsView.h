//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TWISearchResultTagsView : UIView
{
    NSArray *_tags;
    NSArray *_tagsModelArray;
    double _tagsMargin;
    double _totalLength;
    NSArray *_tagViewsArray;
}

@property(retain, nonatomic) NSArray *tagViewsArray; // @synthesize tagViewsArray=_tagViewsArray;
@property(nonatomic) double totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) double tagsMargin; // @synthesize tagsMargin=_tagsMargin;
@property(copy, nonatomic) NSArray *tagsModelArray; // @synthesize tagsModelArray=_tagsModelArray;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)_hideAllTagsView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

