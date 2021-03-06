//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableAttributedString, NSString;

@interface SearchPostResultItem : NSObject
{
    _Bool _isFloor;
    unsigned int _cellHeight;
    NSString *_title;
    NSString *_content;
    NSMutableAttributedString *_hilightedContent;
    NSMutableAttributedString *_hilightedTitle;
    NSString *_tid;
    NSString *_pid;
    NSString *_time;
    NSString *_fname;
    struct CGSize _contentSize;
    struct CGSize _titleSize;
}

+ (id)hilightString:(id)arg1 withBegFlag:(id)arg2 endFlag:(id)arg3 hilightColor:(id)arg4 hilightFont:(id)arg5 color:(id)arg6 font:(id)arg7;
@property(nonatomic) unsigned int cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool isFloor; // @synthesize isFloor=_isFloor;
@property(retain, nonatomic) NSString *fname; // @synthesize fname=_fname;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)dealloc;
- (void)hilightAllStrings;
@property(readonly, retain, nonatomic) NSMutableAttributedString *hilightedContent; // @synthesize hilightedContent=_hilightedContent;
@property(readonly, retain, nonatomic) NSMutableAttributedString *hilightedTitle; // @synthesize hilightedTitle=_hilightedTitle;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

