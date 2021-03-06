//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class H5GlobalSlide, H5Scene, NSString;

@interface H5Global : NSObject
{
    NSString *_title;
    NSString *_thumbnail;
    H5Scene *_scene;
    H5GlobalSlide *_slide;
    struct CGSize _size;
}

@property(retain, nonatomic) H5GlobalSlide *slide; // @synthesize slide=_slide;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) H5Scene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithTitle:(id)arg1 size:(struct CGSize)arg2 backgroundColor:(id)arg3 effectName:(id)arg4;

@end

