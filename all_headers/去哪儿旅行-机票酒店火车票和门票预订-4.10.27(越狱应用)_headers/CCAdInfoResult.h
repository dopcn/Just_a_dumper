//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchNetResult.h"

@class NSString;

@interface CCAdInfoResult : SearchNetResult
{
    NSString *_bizName;
    NSString *_popUpURL;
    NSString *_imgURL;
    NSString *_jumpURL;
    NSString *_bizEx;
}

@property(readonly, copy, nonatomic, getter=bizEx) NSString *bizEx; // @synthesize bizEx=_bizEx;
@property(readonly, copy, nonatomic, getter=jumpURL) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(readonly, copy, nonatomic, getter=imgURL) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(readonly, copy, nonatomic, getter=popUpURL) NSString *popUpURL; // @synthesize popUpURL=_popUpURL;
@property(readonly, copy, nonatomic, getter=bizName) NSString *bizName; // @synthesize bizName=_bizName;
- (void).cxx_destruct;

@end

