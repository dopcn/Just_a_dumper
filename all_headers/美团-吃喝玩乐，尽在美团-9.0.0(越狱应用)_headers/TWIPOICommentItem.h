//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TWIPOIComment;

@interface TWIPOICommentItem : NSObject
{
    double _cellHeight;
    TWIPOIComment *_comment;
}

@property(retain, nonatomic) TWIPOIComment *comment; // @synthesize comment=_comment;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (id)initWithComment:(id)arg1;

@end

