//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ModualDetailItem : NSObject
{
    long long _actionId;
    NSString *_posterUrl;
    NSString *_name;
    NSString *_desc;
    NSString *_bigPosterUrl;
    NSString *_smallPosterUrl;
}

@property(retain, nonatomic) NSString *smallPosterUrl; // @synthesize smallPosterUrl=_smallPosterUrl;
@property(retain, nonatomic) NSString *bigPosterUrl; // @synthesize bigPosterUrl=_bigPosterUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *posterUrl; // @synthesize posterUrl=_posterUrl;
@property(readonly, nonatomic) long long actionId; // @synthesize actionId=_actionId;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 BigPosterPriority:(_Bool)arg2;
- (void)setPosterUrlPriority:(_Bool)arg1;
- (id)initWithDictionary:(id)arg1;

@end

