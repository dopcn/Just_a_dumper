//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PPFootprintObject, PPHomePageView, PPInfoScrollerObject, PPTopicObject;

@interface PPHomePageModel : NSObject
{
    _Bool _isMine;
    NSString *_snsID;
    PPHomePageView *_ppHomePageView;
    PPInfoScrollerObject *_ppInfoScrollerObject;
    PPFootprintObject *_ppFootprintObjec;
    PPTopicObject *_favObject;
}

@property(readonly, nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(retain, nonatomic) PPTopicObject *favObject; // @synthesize favObject=_favObject;
@property(readonly, nonatomic) PPFootprintObject *ppFootprintObjec; // @synthesize ppFootprintObjec=_ppFootprintObjec;
@property(readonly, nonatomic) PPInfoScrollerObject *ppInfoScrollerObject; // @synthesize ppInfoScrollerObject=_ppInfoScrollerObject;
@property(readonly, nonatomic) __weak PPHomePageView *ppHomePageView; // @synthesize ppHomePageView=_ppHomePageView;
@property(readonly, nonatomic) NSString *snsID; // @synthesize snsID=_snsID;
- (void).cxx_destruct;
- (id)getError:(id)arg1;
- (void)ppUnConcernSomeoneBySnsId:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)ppConcernSomeoneBySnsId:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)ppFavTopicObjectBySnsID:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)ppTopicObjectBySnsID:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)ppFootprintObjectBySnsID:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)ppInfoScrollerObject:(CDUnknownBlockType)arg1;
- (id)portraitImage;
- (void)setFocus:(_Bool)arg1;
- (_Bool)isFocus;
- (void)updatePPTopicView;
- (void)updatePPFavTopicView;
- (void)updatePPFootprintView;
- (void)updateInfoVIew;
- (void)updateView;
- (void)uodatePersonInfo;
- (id)initWithView:(id)arg1 snsID:(id)arg2;

@end

