//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JMGoodsDetailNewVedioInfo : NSObject
{
    _Bool _showAVView;
    NSString *_tid;
    NSString *_url;
    NSString *_coverUrl;
    NSString *_anchorId;
    NSString *_anchorUrl;
    NSString *_anchorIcon;
    NSString *_anchorName;
    NSString *_desc;
    NSString *_praiseNum;
    NSString *_isPraised;
    NSString *_isFocused;
    NSString *_videoJumeimall;
}

+ (id)instanceWithProductDict:(id)arg1;
@property(copy, nonatomic) NSString *videoJumeimall; // @synthesize videoJumeimall=_videoJumeimall;
@property(nonatomic) _Bool showAVView; // @synthesize showAVView=_showAVView;
@property(copy, nonatomic) NSString *isFocused; // @synthesize isFocused=_isFocused;
@property(copy, nonatomic) NSString *isPraised; // @synthesize isPraised=_isPraised;
@property(copy, nonatomic) NSString *praiseNum; // @synthesize praiseNum=_praiseNum;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(copy, nonatomic) NSString *anchorIcon; // @synthesize anchorIcon=_anchorIcon;
@property(copy, nonatomic) NSString *anchorUrl; // @synthesize anchorUrl=_anchorUrl;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (void)useInProduct:(id)arg1;

@end

