//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol INewsFlowArticleItem, INewsFlowItem;

@interface NFContentDataProcessor : NSObject
{
    id <INewsFlowArticleItem> _previousItem;
    id <INewsFlowArticleItem> _item;
    id <INewsFlowItem> _willReadItem;
}

+ (id)currentContentData;
@property(retain, nonatomic) id <INewsFlowItem> willReadItem; // @synthesize willReadItem=_willReadItem;
@property(retain, nonatomic) id <INewsFlowArticleItem> item; // @synthesize item=_item;
@property(retain, nonatomic) id <INewsFlowArticleItem> previousItem; // @synthesize previousItem=_previousItem;
- (void)dealloc;

@end

